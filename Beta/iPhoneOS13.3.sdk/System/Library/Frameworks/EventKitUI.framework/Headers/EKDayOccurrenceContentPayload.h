/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UIImage;

@interface EKDayOccurrenceContentPayload : NSObject

{
    long long _requestId;
    unsigned long long _requestOptions;
    UIImage *_backgroundImage;
    UIImage *_textImage;
    UIImage *_travelTimeImage;
    NSAttributedString *_travelTimeString;
}

@property (nonatomic, readonly) long long requestId;
@property (nonatomic, readonly) unsigned long long requestOptions;
@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) UIImage *textImage;
@property (nonatomic, readonly) UIImage *travelTimeImage;
@property (nonatomic, readonly) NSAttributedString *travelTimeString;

- (id)initWithRequestId:(long long)arg1 requestOptions:(unsigned long long)arg2 backgroundImage:(id)arg3 textImage:(id)arg4 travelTimeImage:(id)arg5 travelTimeString:(id)arg6;

@end
