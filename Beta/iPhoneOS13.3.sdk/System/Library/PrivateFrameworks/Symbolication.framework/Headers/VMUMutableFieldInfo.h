/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (nonatomic) unsigned int scannableSize;
@property (nonatomic) unsigned int stride;
@property (nonatomic) unsigned int flags;
@property (nonatomic) _Bool isCapture;
@property (nonatomic) _Bool isByref;
@property (copy, nonatomic) NSString *ivarName;
@property (nonatomic) unsigned int scanType;
@property (retain, nonatomic) VMUClassInfo *destinationLayout;

- (void)setOffset:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setTypeName:(id)arg1;
- (_Bool)replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)mutateTypeFieldsRecursivelyWithBlock:(CDUnknownBlockType)arg1 parentOffset:(unsigned int)arg2;
- (void)addSubField:(id)arg1;

@end
