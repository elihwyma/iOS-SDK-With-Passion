/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface ICMusicRestoreRequestParameters : NSObject

{
    NSNumber *_adamID;
    NSNumber *_accountID;
    NSNumber *_matchStatus;
    NSString *_title;
    NSString *_storeFrontID;
    NSString *_mediaKind;
    NSString *_flavor;
}

@property (copy, nonatomic, readonly) NSNumber *adamID;
@property (copy, nonatomic, readonly) NSNumber *accountID;
@property (copy, nonatomic, readonly) NSNumber *matchStatus;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *storeFrontID;
@property (copy, nonatomic, readonly) NSString *mediaKind;
@property (copy, nonatomic, readonly) NSString *flavor;

- (id)initWithItemID:(id)arg1 title:(id)arg2 storeFrontID:(id)arg3 mediaKind:(id)arg4 accountID:(id)arg5 matchStatus:(id)arg6 flavor:(id)arg7;

@end
