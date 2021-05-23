/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@protocol _DPDataRecorder><_DPDataRecorderKeyProperties;

@interface _DPStringRecorder : NSObject

{
    id <_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;
}

@property (nonatomic, readonly) id <_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;

- (id)init;
- (id)description;
- (id)initWithKey:(id)arg1;
- (_Bool)record:(id)arg1;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(_Bool)arg3;

@end
