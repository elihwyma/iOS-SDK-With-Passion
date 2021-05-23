/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, NSURL;

@interface QLThumbnailAdditionEntry : NSObject

{
    unsigned long long _documentID;
    long long _size;
    NSDate *_lastHitDate;
    NSURL *_lastSeenURL;
    NSData *_vol_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned long long documentID;
@property long long size;
@property (retain) NSDate *lastHitDate;
@property (retain) NSURL *lastSeenURL;
@property (retain) NSData *vol_uuid;
@property (readonly) NSString *unparsedVolumeUUID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;

@end
