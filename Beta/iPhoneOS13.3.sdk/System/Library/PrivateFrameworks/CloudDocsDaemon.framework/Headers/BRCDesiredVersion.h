/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCVersion.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface BRCDesiredVersion : BRCVersion

{
    union {
        unsigned int value;
        struct {
            unsigned int isFault:1;
            unsigned int startDownload:1;
            unsigned int wantsThumbnail:1;
            unsigned int userInitiated:1;
            unsigned int wantsContentForThumbnail:1;
        } ;
    } _flags;
    NSError *_downloadError;
    NSString *_serverName;
}

@property (retain, nonatomic) NSError *downloadError;
@property (nonatomic, readonly) NSString *serverName;
@property (nonatomic) unsigned int options;
@property (nonatomic, readonly) _Bool isFault;
@property (nonatomic, readonly) _Bool wantsContent;
@property (nonatomic, readonly) _Bool wantsContentForThumbnail;
@property (nonatomic, readonly) _Bool wantsThumbnail;
@property (nonatomic, readonly) _Bool userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)descriptionWithContext:(id)arg1;
- (id)initWithDesiredVersion:(id)arg1;
- (void)markLiveAsFault;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (_Bool)isStillValidForEtag:(id)arg1;

@end
