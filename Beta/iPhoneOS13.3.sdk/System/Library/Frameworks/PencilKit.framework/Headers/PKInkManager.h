/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PKInkManager : NSObject

{
    NSMutableDictionary *_inks;
}

@property (nonatomic, readonly) NSMutableDictionary *inks;

+ (void)clearCachedManager;
+ (id)defaultInkManager;

- (id)init;
- (id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;
- (id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2;

@end
