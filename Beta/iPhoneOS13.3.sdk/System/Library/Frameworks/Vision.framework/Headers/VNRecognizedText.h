/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class CRImageReaderOutput, NSString;

@interface VNRecognizedText : NSObject

{
    CRImageReaderOutput *_crOutput;
    unsigned long long _requestRevision;
}

@property (copy, readonly) CRImageReaderOutput *crOutput;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (copy, nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) float confidence;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 CRImageReaderOutput:(id)arg2;
- (id)boundingBoxForRange:(struct _NSRange)arg1 error:(id *)arg2;

@end
