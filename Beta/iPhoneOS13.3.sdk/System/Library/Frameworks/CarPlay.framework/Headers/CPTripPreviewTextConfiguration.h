/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CPTripPreviewTextConfiguration : NSObject

{
    NSString *_startButtonTitle;
    NSString *_additionalRoutesButtonTitle;
    NSString *_overviewButtonTitle;
}

@property (copy, nonatomic, readonly) NSString *startButtonTitle;
@property (copy, nonatomic, readonly) NSString *additionalRoutesButtonTitle;
@property (copy, nonatomic, readonly) NSString *overviewButtonTitle;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartButtonTitle:(id)arg1 additionalRoutesButtonTitle:(id)arg2 overviewButtonTitle:(id)arg3;

@end
