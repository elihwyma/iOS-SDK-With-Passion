/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SSHarvestedApplicationMetadata : NSObject

{
    _Bool _canGenerateDocument;
    NSString *_userActivityTitle;
    NSArray *_contentRects;
}

@property (copy, nonatomic) NSString *userActivityTitle;
@property (copy, nonatomic) NSArray *contentRects;
@property (nonatomic) _Bool canGenerateDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *loggableDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
