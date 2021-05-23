/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SSHarvestedApplicationDocument : NSObject

{
    NSData *_PDFData;
    long long _PDFPage;
    struct CGRect _PDFVisibleRect;
}

@property (copy, nonatomic) NSData *PDFData;
@property (nonatomic) long long PDFPage;
@property (nonatomic) struct CGRect PDFVisibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *loggableDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
