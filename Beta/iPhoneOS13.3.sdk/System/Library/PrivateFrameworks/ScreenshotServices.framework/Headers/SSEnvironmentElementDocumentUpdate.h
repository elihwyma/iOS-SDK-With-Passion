/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class BSSettings, NSString, SSHarvestedApplicationDocument;

@interface SSEnvironmentElementDocumentUpdate : NSObject

{
    NSString *_environmentElementIdentifier;
    SSHarvestedApplicationDocument *_document;
}

@property (copy, nonatomic) NSString *environmentElementIdentifier;
@property (retain, nonatomic) SSHarvestedApplicationDocument *document;
@property (nonatomic, readonly) BSSettings *bsSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *loggableDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
