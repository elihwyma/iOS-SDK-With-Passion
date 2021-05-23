/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWebWebResult.h>

@class NSArray, NSNumber, SAWebAcePicture;

@interface SAWebImageResult : SAWebWebResult

@property (copy, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) SAWebAcePicture *picture;
@property (copy, nonatomic) NSArray *thumbNails;

+ (id)imageResult;
+ (id)imageResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
