/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNFileManager, CNURLSessionFactory;

@interface CNData : NSObject

{
    CNFileManager *_fileManager;
    CNURLSessionFactory *_sessionFactory;
}

@property (nonatomic, readonly) CNFileManager *fileManager;
@property (nonatomic, readonly) CNURLSessionFactory *sessionFactory;

+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2;
+ (id)observableWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2;
+ (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 fileManager:(id)arg4;
+ (unsigned long long)NSDataWritingOptionsFromCNDataWritingOptions:(unsigned long long)arg1;
+ (id)observableWithContentsOfURL:(id)arg1;
+ (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;

- (id)init;
- (id)dataWithContentsOfURL:(id)arg1;
- (id)initWithFileManager:(id)arg1;
- (id)initWithFileManager:(id)arg1 urlSessionFactory:(id)arg2;
- (id)observableWithContentsOfURL:(id)arg1;
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;

@end
