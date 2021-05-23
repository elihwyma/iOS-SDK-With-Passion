/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CNHeap : NSObject

{
    NSString *_rawDataString;
    NSMutableArray *_heapObjects;
    NSMutableDictionary *_heapObjectsByClassAndBinary;
}

@property (retain) NSString *rawDataString;
@property (retain) NSMutableArray *heapObjects;
@property (retain, nonatomic) NSMutableDictionary *heapObjectsByClassAndBinary;

@end
