/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface QLExternallyCachedThumbnailData : NSObject

{
    NSString *_itemIdentifier;
    NSData *_versionIdentifier;
    NSString *_fileExtension;
    unsigned long long _size;
}

@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSData *versionIdentifier;
@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;

@end
