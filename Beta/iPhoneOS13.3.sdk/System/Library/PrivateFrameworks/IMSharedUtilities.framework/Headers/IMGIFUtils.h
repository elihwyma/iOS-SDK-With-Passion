/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMGIFUtils : NSObject

+ (id)logger;
+ (_Bool)setOutgoingError:(id *)arg1 errorCode:(long long)arg2 comment:(id)arg3;
+ (_Bool)readFileProperties:(id *)arg1 fromImageSource:(struct CGImageSource *)arg2 error:(id *)arg3;
+ (id)gifPropertiesFromFileProperties:(id)arg1;
+ (_Bool)readGifProperties:(id *)arg1 fromImageSource:(struct CGImageSource *)arg2 error:(id *)arg3;
+ (id)randomFileName;
+ (_Bool)isGifUti:(id)arg1;
+ (id)setGifProperities:(id)arg1 onFileProperties:(id)arg2;
+ (id)defaultFileProperties;
+ (id)addGifProperties:(id)arg1 toFileProperties:(id)arg2;
+ (_Bool)readFileProperties:(id *)arg1 fromImageSource:(struct CGImageSource *)arg2 withUpdatedLoopCount:(long long)arg3 error:(id *)arg4;
+ (_Bool)writeNewFileAtPath:(id)arg1 withProperties:(id)arg2 fromImageSource:(struct CGImageSource *)arg3 error:(id *)arg4;
+ (id)randomTempFilePath;
+ (_Bool)writeLoopCount:(long long)arg1 destinationFilePath:(id)arg2 fromImageSource:(struct CGImageSource *)arg3 error:(id *)arg4;
+ (id)fileWriter;
+ (void)setFileWriter:(id)arg1;
+ (long long)loopCountFromGifProperties:(id)arg1;
+ (_Bool)readLoopCount:(long long *)arg1 fromImageSource:(struct CGImageSource *)arg2 error:(id *)arg3;
+ (_Bool)isGIFFileAtPath:(id)arg1;
+ (_Bool)writeDefaultPropertiesToDestinationRef:(struct CGImageDestination *)arg1 withOptionalAdditionalGifProperties:(id)arg2 error:(id *)arg3;
+ (_Bool)copyGifFromPath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
+ (_Bool)writeLoopCount:(long long)arg1 withFileAtPath:(id)arg2 error:(id *)arg3;

- (id)logger;

@end
