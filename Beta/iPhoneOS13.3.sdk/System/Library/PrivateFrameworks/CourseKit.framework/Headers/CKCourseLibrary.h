/*
 Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

#import <Foundation/NSObject.h>

@class CKSharedDatabase, NSManagedObjectContext;

@interface CKCourseLibrary : NSObject

{
    CKSharedDatabase *_sharedDatabase;
    NSManagedObjectContext *_moc;
}

@property (retain, nonatomic) CKSharedDatabase *sharedDatabase;
@property (retain, nonatomic) NSManagedObjectContext *moc;

+ (id)sharedDocumentsDirectory;
+ (id)sharedCourseLibrary;
+ (_Bool)isCourseLibraryAvailable;
+ (_Bool)openCourse:(id)arg1;

- (id)init;
- (id)allCourses;
- (id)courseWithCourseID:(id)arg1;
- (id)courseLibrayVersion;

@end
