/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, SSMutableURLRequestProperties, SSURLRequestProperties, UIImage;

@interface SUPageSection : NSObject

{
    double _expirationTime;
    NSString *_identifier;
    UIImage *_image;
    long long _structuredPageType;
    NSString *_title;
    SSMutableURLRequestProperties *_urlRequestProperties;
    id _userInfo;
}

@property (nonatomic, readonly) id segmentedControlItem;
@property (nonatomic) double expirationTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long structuredPageType;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) SSURLRequestProperties *URLRequestProperties;
@property (retain, nonatomic) id userInfo;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)_setURL:(id)arg1;
- (_Bool)loadFromDictionary:(id)arg1;
- (void)_setURLBagKey:(id)arg1;

@end
