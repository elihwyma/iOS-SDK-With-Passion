/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class NSNumber, NSString, NSURL;

@interface IKAssetElement : IKViewElement

{
    _Bool _infiniteDuration;
}

@property (retain, nonatomic, readonly) NSNumber *persistentID;
@property (retain, nonatomic, readonly) NSNumber *rentalAdamID;
@property (retain, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long keyDelivery;
@property (nonatomic, readonly, getter=isInfiniteDuration) _Bool infiniteDuration;
@property (retain, nonatomic, readonly) NSString *actionParams;
@property (retain, nonatomic, readonly) NSString *adamID;
@property (retain, nonatomic, readonly) NSURL *extrasURL;
@property (retain, nonatomic, readonly) NSString *bookmarkID;
@property (retain, nonatomic, readonly) NSString *contentID;
@property (retain, nonatomic, readonly) NSString *externalID;
@property (retain, nonatomic, readonly) NSString *serviceID;

+ (_Bool)shouldParseChildDOMElements;

- (id)_numberForAttribute:(id)arg1;
- (_Bool)infiniteDuration;

@end
