/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXMemoriesBlacklistAccessoryViewSpec : NSObject

{
    unsigned long long _type;
    struct CGRect _contentViewFrame;
    struct CGRect _accessoryViewFrame;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) struct CGRect contentViewFrame;
@property (nonatomic, readonly) struct CGRect accessoryViewFrame;

+ (id)specWithFrame:(struct CGRect)arg1;

- (id)initWithContentViewFrame:(struct CGRect)arg1;

@end
