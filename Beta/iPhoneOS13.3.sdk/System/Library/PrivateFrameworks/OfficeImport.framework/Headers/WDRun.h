/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject

{
    WDParagraph *mParagraph;
}

@property (weak, readonly) WDParagraph *paragraph;

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (void)clearProperties;
- (id)initWithParagraph:(id)arg1;
- (int)runType;

@end
