/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@protocol CKSearchResultSupplementryCell <Swift>

@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (unsigned short)reuseIdentifier;
+ (unsigned short)supplementaryViewType;
+ (unsigned short)desiredZPosition;

@end
