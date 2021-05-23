/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSRecordBuilder.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSBundleRecordUpdater : LSRecordBuilder

{
    struct LSContext _context;
    _Bool _hasContext;
    unsigned int _bundleID;
    struct LSBundleData _bundleData;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;

- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(_Bool)arg2;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (void)parsePlaceholderMetadata:(id)arg1;
- (_Bool)updateBundleRecord:(id *)arg1;

@end
