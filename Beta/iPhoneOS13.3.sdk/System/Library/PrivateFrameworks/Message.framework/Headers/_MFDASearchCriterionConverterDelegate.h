/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MFDASearchCriterionConverterDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2;
- (unsigned long long)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(id)arg3;
- (_Bool)_shouldConvertEqualsToContainsForKey:(id)arg1;

@end
