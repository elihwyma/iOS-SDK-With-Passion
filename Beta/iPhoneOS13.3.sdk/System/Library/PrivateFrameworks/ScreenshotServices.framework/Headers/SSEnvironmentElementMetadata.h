/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SSEnvironmentElementMetadata : NSObject

{
    NSString *_userActivityTitle;
    NSArray *_rectsInElement;
}

@property (copy, nonatomic, setter=setUserActivityTitle:) NSString *userActivityTitle;
@property (copy, nonatomic) NSArray *rectsInElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *loggableDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_encodableRects;
- (id)_decodedRectsForEncodedRects:(id)arg1;

@end
