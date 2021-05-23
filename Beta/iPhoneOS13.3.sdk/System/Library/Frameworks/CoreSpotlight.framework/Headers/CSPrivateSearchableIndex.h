/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchableIndex.h>

@class CSIndexConnection, NSString;

@interface CSPrivateSearchableIndex : CSSearchableIndex

{
    _Bool _attemptedIndexPathResolution;
    NSString *_resolvedIndexPath;
    NSString *_indexPath;
    CSIndexConnection *_savedConnection;
}

@property _Bool attemptedIndexPathResolution;
@property (retain, nonatomic) NSString *resolvedIndexPath;
@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) CSIndexConnection *savedConnection;

+ (id)defaultSearchableIndex;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)connection;
- (id)xpc_dictionary_for_command:(const char *)arg1 requiresInitialization:(_Bool)arg2;

@end
