/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject

{
    CKOperationConfiguration *_operationConfiguration;
}

@property (retain, nonatomic) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) _Bool allowsCellularAccess;

- (id)init;
- (void)dealloc;
- (id)copy;
- (void)resetOperationConfiguration;
- (void)applyToOperation:(id)arg1;

@end
