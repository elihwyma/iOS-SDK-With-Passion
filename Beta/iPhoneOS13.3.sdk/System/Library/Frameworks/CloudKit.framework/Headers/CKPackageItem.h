/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData, NSNumber, NSString, NSURL;

@interface CKPackageItem : NSObject

{
    int _sectionIndex;
    long long _packageIndex;
    NSURL *_fileURL;
    unsigned long long _itemID;
    NSData *_signature;
    long long _size;
    long long _offset;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSData *_wrappedAssetKey;
    NSString *_itemTypeHint;
}

@property (nonatomic) long long packageIndex;
@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long itemID;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) long long size;
@property (nonatomic) long long offset;
@property (nonatomic) int sectionIndex;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSData *wrappedAssetKey;
@property (retain, nonatomic) NSString *itemTypeHint;

- (id)description;
- (id)initWithFileURL:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;

@end
