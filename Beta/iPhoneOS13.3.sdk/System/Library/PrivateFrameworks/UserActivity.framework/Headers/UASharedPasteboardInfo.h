/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSFileHandle, NSString;

@interface UASharedPasteboardInfo : NSObject

{
    NSFileHandle *_dataFile;
    long long _dataSize;
    NSArray *_items;
    NSString *_sharedDataPath;
    NSDictionary *_sandboxExtensions;
}

@property (retain) NSFileHandle *dataFile;
@property long long dataSize;
@property (copy) NSArray *items;
@property (copy) NSString *sharedDataPath;
@property (copy) NSDictionary *sandboxExtensions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
