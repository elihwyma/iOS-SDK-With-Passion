/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDMessageLink, NSString, NSTimeZone;

@interface GEOMessageLink : NSObject

{
    GEOPDMessageLink *_messageLink;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *messageID;
@property (nonatomic, readonly) NSString *messageURLString;
@property (nonatomic, readonly) _Bool isVerified;
@property (nonatomic, readonly) NSString *navBackgroundColorString;
@property (nonatomic, readonly) NSString *navTintColorString;

- (int)responseTime;
- (id)initWithMessageLink:(id)arg1;
- (id)messageBusinessHours;

@end
