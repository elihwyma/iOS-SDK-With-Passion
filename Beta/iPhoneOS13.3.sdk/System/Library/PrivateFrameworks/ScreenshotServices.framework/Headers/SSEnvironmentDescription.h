/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class BSSettings, NSArray, NSDate, NSString, SSEnvironmentDescriptionAppleInternalOptions, SSImageSurface, SSUIServiceOptions;

@interface SSEnvironmentDescription : NSObject

{
    NSArray *_elements;
    NSString *_identifier;
    NSString *_sessionIdentifier;
    unsigned long long _presentationMode;
    _Bool _canAutosaveToFiles;
    unsigned int _externalFlashLayerContextID;
    SSImageSurface *_imageSurface;
    double _imageScale;
    SSUIServiceOptions *_serviceOptions;
    NSDate *_date;
    unsigned long long _externalFlashLayerRenderID;
    SSEnvironmentDescriptionAppleInternalOptions *_appleInternalOptions;
    NSString *_betaApplicationBundleID;
    NSString *_betaApplicationName;
    struct CGSize _imagePixelSize;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *elements;
@property (retain, nonatomic) SSImageSurface *imageSurface;
@property (nonatomic) struct CGSize imagePixelSize;
@property (nonatomic) double imageScale;
@property (nonatomic, readonly) struct CGSize imagePointSize;
@property (nonatomic) unsigned long long presentationMode;
@property (retain, nonatomic) SSUIServiceOptions *serviceOptions;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long externalFlashLayerRenderID;
@property (nonatomic) unsigned int externalFlashLayerContextID;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic, readonly) BSSettings *bsSettings;
@property (retain, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions;
@property (copy, nonatomic) NSString *betaApplicationBundleID;
@property (copy, nonatomic) NSString *betaApplicationName;
@property (nonatomic) _Bool canAutosaveToFiles;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)takeElementsFromDisplayLayout:(id)arg1;
- (void)setDebugElements:(id)arg1;

@end
