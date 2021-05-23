/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSDate, NSString, OFMediaMetadataDatabaseCache;

@interface OFMediaMetadataDatabaseCacheEntry : NSObject

{
    OFMediaMetadataDatabaseCache *_context;
    long long _uniqueID;
    NSString *_identifier;
    NSDate *_creationDate;
    NSString *_name;
    _Bool _isFault;
    _Bool _isDirty;
}

@property _Bool isFault;
@property _Bool isDirty;
@property long long uniqueID;
@property (retain) OFMediaMetadataDatabaseCache *context;
@property (copy) NSString *identifier;
@property (retain) NSDate *creationDate;
@property (copy) NSString *name;

- (id)init;
- (void)dealloc;
- (void)save;
- (void)cleanup;
- (void)update;
- (id)initWithContext:(id)arg1 andStatement:(struct sqlite3_stmt *)arg2;
- (void)updateWithStatement:(struct sqlite3_stmt *)arg1;

@end
