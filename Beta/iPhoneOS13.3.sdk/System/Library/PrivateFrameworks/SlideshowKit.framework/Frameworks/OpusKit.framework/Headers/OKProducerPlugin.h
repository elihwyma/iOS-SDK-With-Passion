/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle

{
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
    OKProducerContent *_content;
}

@property (retain, nonatomic) OKProducerContent *content;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (_Bool)isLoaded;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedName;
- (unsigned long long)family;
- (id)backgroundColor;
- (_Bool)_load;
- (id)contentIdentifier;
- (id)audioURLs;
- (void)_unload;
- (void)setupJavascriptContext:(id)arg1;
- (id)exportedClassNames;
- (_Bool)hasLoadedClass:(Class)arg1;
- (double)minimumContentVersion;
- (id)producerWithPresentation:(id)arg1;
- (_Bool)loadRetain;
- (void)unloadRelease;
- (void)_bundleDidLoad:(id)arg1;
- (id)supportedResolutions;
- (_Bool)hasExportedClass:(Class)arg1;

@end
