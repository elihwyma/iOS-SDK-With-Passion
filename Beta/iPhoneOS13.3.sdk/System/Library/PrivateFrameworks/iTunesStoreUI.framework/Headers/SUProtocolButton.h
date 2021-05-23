/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject

{
    NSDictionary *_buttonDictionary;
}

@property (nonatomic, readonly) NSDictionary *buttonDictionary;
@property (nonatomic, readonly) NSString *buttonLocation;
@property (nonatomic, readonly) NSString *buttonTarget;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic, readonly) NSURL *URL;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithButtonDictionary:(id)arg1;

@end
