/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUClassInfo.h>

@class NSString;

@interface VMUMutableClassInfo : VMUClassInfo

@property (retain, nonatomic) VMUClassInfo *superclassInfo;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *binaryPath;
@property (nonatomic) unsigned int defaultScanType;

- (void)setFields:(id)arg1;
- (void)addFields:(id)arg1;
- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(CDUnknownBlockType)arg3;
- (void)mutateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)setVariantScanType:(unsigned int)arg1 withEvaluator:(CDUnknownBlockType)arg2;
- (void)addVariantRecursively:(id)arg1 forField:(id)arg2 withEvaluator:(CDUnknownBlockType)arg3;
- (void)mutateTypeFieldsRecursivelyWithBlock:(CDUnknownBlockType)arg1;

@end
