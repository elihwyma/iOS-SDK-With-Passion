/*
 Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject

{
    NSString *_destinationPath;
    NSString *_sourcePath;
}

@property (nonatomic, readonly) NSString *sourcePath;
@property (nonatomic, readonly) NSString *destinationPath;

- (void)dealloc;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2;
- (_Bool)copyDatabase:(CDUnknownBlockType)arg1;
- (_Bool)deleteFailedArchiveAtPath:(id)arg1 error:(id *)arg2;

@end
