/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@protocol SXConditionHints, SXConditionalHints;

@interface SXHints : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXConditionHints> conditions;
@property (nonatomic, readonly) id <SXConditionalHints> conditionals;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end
