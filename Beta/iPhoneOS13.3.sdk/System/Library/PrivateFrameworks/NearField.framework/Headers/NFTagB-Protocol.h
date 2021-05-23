/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@class NSData;

@protocol NFTagB

@property (copy, nonatomic, readonly) NSData *pupi;
@property (copy, nonatomic, readonly) NSData *applicationData;
@property (nonatomic, readonly) _Bool applicationDataCoding;
@property (copy, nonatomic, readonly) NSData *selectedAID;

@end
