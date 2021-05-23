/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSMutableArray;

@interface MapLeaf

@property (retain, nonatomic) NSMutableArray *accountsArray;
@property (nonatomic, readonly) unsigned long long accountsArray_Count;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;
- (id)recordForAccountId:(id)arg1 deviceIdVRFOutput:(id)arg2 appVersion:(unsigned long long)arg3 clientDataVRFoutput:(id)arg4;

@end
