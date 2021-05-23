/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSTimeErrorSequence : NSObject

{
    NSArray *_timeErrors;
}

@property (copy, nonatomic, readonly) NSArray *timeErrors;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)arg1 timeError:(long long *)arg2 count:(long long)arg3;

- (void)dealloc;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(_Bool)arg5;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (id)initWithTimeErrors:(id)arg1;

@end
