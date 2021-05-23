/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString;

@interface ICDocCamDocumentInfoCollection : NSObject

{
    NSString *_title;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_uniqueIdentifier;
    NSMutableArray *_docInfos;
}

@property (nonatomic, readonly) long long docCamPDFVersion;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *docInfos;

- (id)init;
- (void)bumpModificationDate;

@end
