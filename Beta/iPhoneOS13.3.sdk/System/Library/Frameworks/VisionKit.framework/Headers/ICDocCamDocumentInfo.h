/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class ICDocCamImageQuad, NSData, NSDictionary, NSString;

@protocol DCScanDataDelegate, ICDocCamViewControllerDelegate;

@interface ICDocCamDocumentInfo : NSObject

{
    short _currentFilter;
    NSDictionary *_metaData;
    ICDocCamImageQuad *_imageQuad;
    NSString *_croppedAndFilteredImageUUID;
    NSString *_croppedButNotFilteredImageUUID;
    NSString *_fullImageUUID;
    NSString *_meshAnimImageUUID;
    long long _currentOrientation;
    NSString *_scanDataDelegateIdentifier;
    NSData *_markupModelData;
    id <ICDocCamViewControllerDelegate> _delegate;
}

@property (weak) id <ICDocCamViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad;
@property (retain, nonatomic) NSString *croppedAndFilteredImageUUID;
@property (retain, nonatomic) NSString *croppedButNotFilteredImageUUID;
@property (retain, nonatomic) NSString *fullImageUUID;
@property (retain, nonatomic) NSString *meshAnimImageUUID;
@property (nonatomic) short currentFilter;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSString *scanDataDelegateIdentifier;
@property (nonatomic, readonly) id <DCScanDataDelegate> scanDataDelegate;
@property (nonatomic, readonly) _Bool hasFilter;
@property (retain, nonatomic) NSData *markupModelData;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)allUUIDs;

@end
