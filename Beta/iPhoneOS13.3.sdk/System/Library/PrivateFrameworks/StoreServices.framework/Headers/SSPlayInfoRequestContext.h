/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSNumber, NSString;

@interface SSPlayInfoRequestContext : NSObject

{
    NSNumber *_accountIdentifier;
    NSNumber *_contentIdentifier;
    NSString *_playerGUID;
    NSData *_sic;
    NSArray *_sinfs;
    NSString *_playbackType;
}

@property (copy, nonatomic) NSString *playerGUID;
@property (copy, nonatomic) NSData *SICData;
@property (copy, nonatomic) NSArray *sinfs;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *contentIdentifier;
@property (copy, nonatomic) NSString *playbackType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
