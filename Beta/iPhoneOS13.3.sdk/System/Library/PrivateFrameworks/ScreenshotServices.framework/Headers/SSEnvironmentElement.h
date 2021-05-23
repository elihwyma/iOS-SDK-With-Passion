/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString, SSHarvestedApplicationDocument, SSHarvestedApplicationMetadata;

@interface SSEnvironmentElement : NSObject

{
    struct CGRect _rect;
    NSString *_bundleIdentifier;
    NSString *_elementIdentifier;
    NSString *_identifier;
    _Bool _hasKeyboardFocus;
    SSHarvestedApplicationMetadata *_metadata;
    SSHarvestedApplicationDocument *_document;
}

@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool hasKeyboardFocus;
@property (nonatomic, readonly) _Bool supportsMetadataCapture;
@property (retain, nonatomic) SSHarvestedApplicationMetadata *metadata;
@property (retain, nonatomic) SSHarvestedApplicationDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *loggableDescription;

+ (id)_metadataIdentifierBlacklist;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithDisplayLayoutElement:(id)arg1;

@end
