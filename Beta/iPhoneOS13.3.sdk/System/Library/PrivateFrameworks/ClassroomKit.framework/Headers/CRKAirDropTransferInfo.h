/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface CRKAirDropTransferInfo : NSObject

{
    _Bool _autoAccept;
    _Bool _hideProgress;
    NSString *_senderName;
    NSData *_previewImageData;
    NSString *_bundleID;
    NSArray *_items;
    NSArray *_files;
    NSString *_sourceBundleIdentifier;
    NSString *_itemsDescription;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) _Bool autoAccept;
@property (nonatomic) _Bool hideProgress;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSData *previewImageData;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *files;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (copy, nonatomic) NSString *itemsDescription;

- (id)description;
- (void)addItems:(id)arg1;
- (void)addFiles:(id)arg1;

@end
