/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SASymbol : NSObject

{
    unsigned long long _offsetIntoTextSegment;
    unsigned long long _length;
    NSString *_name;
    NSMutableArray *_sourceInfos;
}

@property unsigned long long offsetIntoTextSegment;
@property unsigned long long length;
@property (retain) NSString *name;
@property (readonly) NSMutableArray *sourceInfos;

+ (id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3;
+ (id)symbolWithCSSymbol:(struct _CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2;

- (id)init;
- (id)debugDescription;
- (id)addSourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned int)arg3 columnNum:(unsigned int)arg4 filePath:(id)arg5;
- (id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1;

@end
