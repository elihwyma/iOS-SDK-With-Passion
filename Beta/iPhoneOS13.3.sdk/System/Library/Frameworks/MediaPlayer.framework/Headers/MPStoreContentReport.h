/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPStoreContentReport : NSObject <Swift>

{
    NSString *_userID;
    NSString *_contentID;
    long long _concernItemType;
    NSString *_commentText;
    NSString *_aucType;
    NSString *_concernTypeID;
    NSString *_displayText;
}

@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *contentID;
@property (nonatomic) long long concernItemType;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSString *aucType;
@property (copy, nonatomic) NSString *concernTypeID;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
