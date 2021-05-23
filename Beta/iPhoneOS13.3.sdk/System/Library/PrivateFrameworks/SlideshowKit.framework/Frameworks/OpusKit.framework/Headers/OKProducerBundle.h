/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary, NSString, NSURL;

@interface OKProducerBundle : NSObject

{
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
    unsigned long long _type;
    NSString *_bundleExtension;
}

@property (retain, nonatomic) NSString *bundleExtension;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (void)dealloc;
- (id)identifier;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)infoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (double)version;
- (id)url;
- (id)bundle;
- (id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2;

@end
