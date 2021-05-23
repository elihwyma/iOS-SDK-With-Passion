/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REElementAction.h>

@class NSString;

@interface REElementComplicationAction : REElementAction

{
    NSString *_slotIdentifier;
}

@property (nonatomic, readonly) NSString *slotIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_performWithContext:(id)arg1;
- (id)initWithSlotIdentifier:(id)arg1;

@end
