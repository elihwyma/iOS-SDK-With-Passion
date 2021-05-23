/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTCoreModelCategoryPairing : NSObject

{
    long long _pairedCategory;
    NSString *_localizedPairedTitle;
    NSString *_localizedPairTitle;
    NSString *_localizedUnpairTitle;
}

@property (nonatomic, readonly) long long pairedCategory;
@property (copy, nonatomic, readonly) NSString *localizedPairedTitle;
@property (copy, nonatomic, readonly) NSString *localizedPairTitle;
@property (copy, nonatomic, readonly) NSString *localizedUnpairTitle;

- (id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4;

@end
