/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HFRoomBuilder, NSArray, NSString;

@protocol HFIconDescriptor;

@protocol HFServiceLikeBuilder <Swift>

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) _Bool supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) _Bool isFavorite;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;

- (unsigned short)removeItemFromHome;

@end
