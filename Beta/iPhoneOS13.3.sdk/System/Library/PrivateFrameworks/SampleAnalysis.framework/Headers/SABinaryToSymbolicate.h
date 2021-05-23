/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class SABinary;

__attribute__((visibility("hidden")))
@interface SABinaryToSymbolicate : NSObject

{
    int _livePid;
    SABinary *_binary;
    unsigned long long _dataGatheringOptions;
}

@property (readonly) SABinary *binary;
@property unsigned long long dataGatheringOptions;
@property int livePid;

+ (id)binaryToSymbolicateWithBinary:(id)arg1;

@end
