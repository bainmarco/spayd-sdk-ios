/*
 * [/] SmartPlatba
 *
 * Copyright 2012 www.qr-platba.cz
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Juraj Durech <juraj@inmite.eu>
 */

#import "SmartPayment.h"
#import "SmartPaymentConfiguration.h"

@interface SmartPaymentReader : NSObject

- (id) initWithConfiguration:(SmartPaymentConfiguration*)configuration;

// Returns error. Value is valid only if reader failed before.
@property (nonatomic, strong) NSError * error;

- (NSDictionary*) paymentAttributesFromCode:(NSString*)code;

- (SmartPayment*) createPaymentFromCode:(NSString*)code;

@end


@interface SmartPayment (Reader)

+ (id) smartPaymentWithCode:(NSString*)code configuration:(SmartPaymentConfiguration*)configuration;

@end
