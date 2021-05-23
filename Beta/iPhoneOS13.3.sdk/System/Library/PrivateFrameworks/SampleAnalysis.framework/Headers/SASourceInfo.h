/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SASourceInfo : NSObject

{
    unsigned int _lineNum;
    unsigned int _columnNum;
    unsigned long long _offsetIntoTextSegment;
    unsigned long long _length;
    NSString *_filePath;
}

@property (readonly) unsigned long long offsetIntoTextSegment;
@property (readonly) unsigned long long length;
@property (readonly) NSString *filePath;
@property (readonly) NSString *fileName;
@property (readonly) unsigned int lineNum;
@property (readonly) unsigned int columnNum;

+ (id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned int)arg3 columnNum:(unsigned int)arg4 filePath:(id)arg5;
+ (id)sourceInfoWithCSSourceInfo:(struct _CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2;

- (id)debugDescription;

@end
