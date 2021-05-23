/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGPeopleTitleUtility : NSObject

+ (id)beautifiedLocationStringWithPersonNode:(id)arg1 peopleAddressEdge:(id)arg2 titleComponent:(id)arg3 insertLineBreak:(_Bool)arg4 allowFamilyHome:(_Bool)arg5;
+ (id)nameStringForPersonNodes:(id)arg1 includeMe:(_Bool)arg2 insertLineBreaks:(_Bool)arg3;
+ (id)nameStringForPersonNodes:(id)arg1 includeMe:(_Bool)arg2 allowUnnamed:(_Bool)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(_Bool)arg5;
+ (id)ageStringForPeopleNode:(id)arg1 date:(id)arg2;
+ (id)ageStringForPeopleNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2;
+ (id)peopleGroupNameForPeopleNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2;
+ (id)nameFromPersonNode:(id)arg1;
+ (id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1 titleComponent:(id)arg2 containsMe:(_Bool)arg3;

@end
