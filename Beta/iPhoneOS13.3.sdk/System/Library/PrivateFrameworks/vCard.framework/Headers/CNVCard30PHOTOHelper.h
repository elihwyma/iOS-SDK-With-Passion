/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class CNVCardWritingOptions;

@protocol CNVCardPerson;

@interface CNVCard30PHOTOHelper : NSObject

{
    id <CNVCardPerson> _person;
    CNVCardWritingOptions *_options;
    unsigned long long _maxBytes;
}

@property (nonatomic, readonly) id <CNVCardPerson> person;
@property (nonatomic, readonly) CNVCardWritingOptions *options;
@property (nonatomic, readonly) unsigned long long maxBytes;

- (id)init;
- (id)description;
- (id)image;
- (id)largeImage;
- (id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3;
- (id)bestEffortImage;
- (id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3;
- (id)compressImage:(id)arg1 allowableCompressions:(id)arg2;
- (id)scaleImage:(id)arg1 toFit:(struct CGSize)arg2 allowableCompressionQuality:(id)arg3;

@end
